/*
 * Copyright (C) 2023-2025 by tinbox.wu, All Rights Reserved.
 *
 * @FilePath     : test.c
 * @Author       : tinbox.wu tinboxwu@gmail.com
 *
 * @Date         : 2025-01-13 11:37:57
 * @LastEditors  : tinbox.wu tinboxwu@gmail.com
 * @LastEditTime : 2025-02-21 09:56:48
 * @Description  :
 *
 */

/**
 * @description: 函数返回两个数中较大的那个数
 * @param {*}
 * @return {*}
 */

int max(int num1, int num2) {
  /* 局部变量声明 */
  int result;

  if (num1 > num2)
    result = num1;
  else
    result = num2;

  return result;
}