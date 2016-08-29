/*
 * Copyright 2016 Andrew Rossignol andrew.rossignol@gmail.com
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <gtest/gtest.h>

#include "util/singleton.h"

TEST(SingletonTest, Uninitialized) {
  ASSERT_FALSE(util::Singleton<int>::IsInitialized());
  ASSERT_EQ(util::Singleton<int>::Instance(), nullptr);
}

TEST(SingletonTest, Initialized) {
  util::Singleton<int>::Init(10);
  ASSERT_TRUE(util::Singleton<int>::IsInitialized());
  ASSERT_EQ(*util::Singleton<int>::Instance(), 10);
  util::Singleton<int>::DeInit();
}
