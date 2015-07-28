//
//  NSString+LM.h
//  LMCategory
//
//  Created by 李蒙 on 15/7/3.
//  Copyright (c) 2015年 李蒙. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

#define LMMD5(string) [string lm_md5]
#define LMSHA1(string) [string lm_sha1]

#define LMValidNumber(string) [string lm_validNumber]
#define LMValidMobile(string) [string lm_validMobile]
#define LMValidIdentityCard(string) [string lm_validIdentityCard]
#define LMValidURL(string) [string lm_validURL]
#define LMValidEMail(string) [string lm_validEMail]

#define LMDocumentsFile(name) [name lm_documentsFile]
#define LMRemoveDocumentsFile(file) [file lm_removeDocumentsFile]
#define LMSaveUserDefaults(string,key) [string lm_saveUserDefaultsWithKey:key]
#define LMGetUserDefaults(key) [key lm_getUserDefaults]

#define LMTrimWhitespaceAndNewline(string) [string lm_trimWhitespaceAndNewline]
#define LMTrimWhitespaceAll(string) [string lm_trimWhitespaceAll]

#define LMEncode(string) [string lm_encode]
#define LMDecode(string) [string lm_decode]

#define LMCallTelephone(string) [string lm_callTelephone]

@interface NSString (LM)

/**
 *  MD5
 *
 *  @return NSString
 */
- (NSString *)lm_md5;

/**
 *  SHA1
 *
 *  @return NSString
 */
- (NSString *)lm_sha1;

/**
 *  判断输入0-9数字
 *
 *  @return 是/不是
 */
- (BOOL)lm_validNumber;

/**
 *  判断手机号
 *
 *  @return 是/不是
 */
- (BOOL)lm_validMobile;

/**
 *  判断身份证号
 *
 *  @return 是/不是
 */
- (BOOL)lm_validIdentityCard;

/**
 *  判断URL
 *
 *  @return 是/不是
 */
- (BOOL)lm_validURL;

/**
 *  判断EMail
 *
 *  @return 是/不是
 */
- (BOOL)lm_validEMail;

/**
 *  计算Size
 *
 *  @param font 当前字体
 *  @param size 当前区域内
 *
 *  @return Size
 */
- (CGSize)lm_sizeWithFont:(UIFont *)font constrainedToSize:(CGSize)size;

/**
 *  计算Width
 *
 *  @param font 当前字体
 *  @param size 当前区域内
 *
 *  @return Width
 */
- (CGFloat)lm_widthWithFont:(UIFont *)font constrainedToSize:(CGSize)size;

/**
 *  计算Height
 *
 *  @param font 当前字体
 *  @param size 当前区域内
 *
 *  @return Height
 */
- (CGFloat)lm_heightWithFont:(UIFont *)font constrainedToSize:(CGSize)size;

/**
 *  返回沙盒中的文件路径
 *
 *  @return 沙盒中的文件路径
 */
- (NSString *)lm_documentsFile;

/**
 *  删除沙盒中的文件
 *
 *  @return 成功/失败
 */
- (BOOL)lm_removeDocumentsFile;

/**
 *  写入系统偏好
 *
 *  @param key
 */
- (BOOL)lm_saveUserDefaultsWithKey:(NSString *)key;

/**
 *  获取系统偏好值
 *
 *  @return 偏好值
 */
- (NSString *)lm_getUserDefaults;

/**
 *  去掉字符串两端的空白和回车字符
 *
 *  @return NSString
 */
- (NSString *)lm_trimWhitespaceAndNewline;

/**
 *  去掉字符串所有的空白字符
 *
 *  @return NSString
 */
- (NSString *)lm_trimWhitespaceAll;

/**
 *  URLEncode
 *
 *  @return NSString
 */
- (NSURL *)lm_urlEncode;

/**
 *  Encode
 *
 *  @return NSString
 */
- (NSString *)lm_encode;

/**
 *  Decode
 *
 *  @return NSString
 */
- (NSString *)lm_decode;

/**
 *  打电话
 *
 *  @return 是否拨打成功
 */
- (BOOL)lm_callTelephone;

@end