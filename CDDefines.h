//
//  CDDefines.h
//  CtrlDo
//
//  Created by Oksana Kovalchuk on 28/6/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

#define SYSTEM_VERSION ([[[UIDevice currentDevice] systemVersion] floatValue])
#define IS_IPHONE_5 ([[UIScreen mainScreen] bounds].size.height == 568.0f)
#define IS_RETINA ([UIScreen mainScreen].scale == 2)

#define IOS7            (7.0 <= SYSTEM_VERSION && SYSTEM_VERSION < 8.0)
#define IOS8            (7.0 <= SYSTEM_VERSION && SYSTEM_VERSION)

#ifndef DEBUG
    #define NS_BLOCK_ASSERTIONS
#endif

#pragma mark Callbacks

@class NSManagedObject;

typedef void (^CDCodeBlock)(void);
typedef void (^CDDateBlock)(NSDate* date);
typedef void (^CDBooleanQueryBlock)(NSError *error, BOOL result);
typedef void (^CDCompletionBlock)(NSError *error);
typedef void (^CDContextBlock)(NSManagedObjectContext* context);

typedef void (^CDManagedObjectBlock)(id object);
#define SYNC_ENGINE 0
#define MCANIMATE_SHORTHAND

#define AN_TABLE_LOG