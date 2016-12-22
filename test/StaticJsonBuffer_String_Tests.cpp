// Copyright Benoit Blanchon 2014-2016
// MIT License
//
// Arduino JSON library
// https://github.com/bblanchon/ArduinoJson
// If you like this project, please add a star!

#include <ArduinoJson.h>
#include <gtest/gtest.h>

TEST(StaticJsonBuffer_String_Tests, WorksWhenBufferIsBigEnough) {
  StaticJsonBuffer<6> jsonBuffer;

  StaticJsonBufferBase::String str = jsonBuffer.startString();
  str.append('h');
  str.append('e');
  str.append('l');
  str.append('l');
  str.append('o');

  ASSERT_STREQ("hello", str.c_str());
}
