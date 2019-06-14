#pragma once

constexpr auto REG_USER_NAME = "^\\w{5,32}$";
constexpr auto REG_PASSWD = "^\\w{6,16}$";
constexpr auto REG_PHONE = "^\\d{11}$";
constexpr auto REG_EMAIL = "^[\\w!#$%&'*+/=?^_`{|}~-]+(?:\\.[\\w!#$%&'*+/=?^_`{|}~-]+)*@(?:[\\w](?:[\\w-]*[\\w])?\\.)+[\\w](?:[\\w-]*[\\w])?$";
