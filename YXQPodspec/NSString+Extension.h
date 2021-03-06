//
//  NSString+Extension.h
//  YouGouApp
//
//  Created by iyan on 2017/6/14.
//  Copyright © 2017年 iyan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extension)

/**
 * 是否为中文
 */
- (BOOL)isChineseValue;

/**
 * 是否为英文
 */
- (BOOL)isEnglishValue;

/**
 * 是否为邮箱
 */
- (BOOL)isEmail;

/**
 * 是否为座机
 */
- (BOOL)isPhoneNum;

/**
 * 是否为手机
 */
- (BOOL)isMobileNum;

/**
 * 是否包含空格和空白
 */
- (BOOL)isTextHaswhitespace;

/**
 * 删除空白字符
 */
- (NSString *)deleteWhitespaceCharacters;

/**
 * 判断是否含有emoji表情
 */
- (BOOL)isContainsEmoji;

/**
 *  过滤Emoji表情（去除）
 *  iOS9的emoji编码范围还未确定导致部分（新增）表情无法过滤
 *  @return 去掉Emoji表情后的String
 */
- (NSString *)cleanEmoji;

/**
 *  过滤特殊符号
 */
- (NSString *)trimmedString;

/**
 *  特殊符号过滤后，是否只剩下空字符串
 *  仅剩空返回yes  还有其他字符串返回no
 */
- (BOOL)isTrimmedString;

/**
 * 是否为身份证
 */
- (BOOL)isIDCard;

/**
 * 获取md5Hash
 */
- (NSString *)md5Hash;

@end
