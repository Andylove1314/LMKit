//
//  NSObject+LM.m
//  LMCategory
//
//  Created by 李蒙 on 15/7/18.
//  Copyright (c) 2015年 李蒙. All rights reserved.
//

#import "NSObject+LM.h"

@implementation NSObject (LM)

#pragma mark 自定义对象归档

- (BOOL)lm_archiverDataWriteToFile:(NSString *)file forKey:(NSString *)key
{
    NSMutableData *data = [NSMutableData new];
    
    NSKeyedArchiver *archiver = [[NSKeyedArchiver alloc] initForWritingWithMutableData:data];
    
    [archiver encodeObject:self forKey:key];
    
    [archiver finishEncoding];
    
    return [data writeToFile:[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0] stringByAppendingPathComponent:file] atomically:YES];
}

#pragma mark 自定义对象解档

+ (id)lm_unarchiverFile:(NSString *)file decodeObjectForKey:(NSString *)key
{
    NSData *data = [[NSMutableData alloc] initWithContentsOfFile:[NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES)[0] stringByAppendingPathComponent:file]];
    
    if (!data) {
        
        return nil;
    }
    
    NSKeyedUnarchiver *unarchiver = [[NSKeyedUnarchiver alloc] initForReadingWithData:data];
    
    id archivingData = [unarchiver decodeObjectForKey:key];
    
    [unarchiver finishDecoding];
    
    return archivingData;
}

@end
