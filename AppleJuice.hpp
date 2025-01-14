/*
 * This file is part of the Capibara zero project(https://capibarazero.github.io/).
 * Copyright (c) 2023 Andrea Canale.
 * Copyright (c) 2023 RapierXbox
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

#ifndef APPLEJUICE_H
#define APPLEJUICE_H
#include <NimBLEDevice.h>

class AppleJuice
{
private:
    NimBLEAdvertisementData getOAdvertisementData();
    NimBLEServer *pServer;
    NimBLEAdvertising *pAdvertising;
public:
    AppleJuice();
    ~AppleJuice();
    void attack();
};
#endif
