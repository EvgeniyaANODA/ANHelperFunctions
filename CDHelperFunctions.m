//
//  CDHelperFunctions.m
//  CtrlDo
//
//  Created by Oksana Kovalchuk on 6/7/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

#import "CDHelperFunctions.h"

void CDDispatchCompletionBlockToMainQueue(CDCompletionBlock block, NSError *error)
{
    dispatch_async(dispatch_get_main_queue(), ^{
        if (block) block(error);
    });
}

CDCompletionBlock CDMainQueueCompletionFromCompletion(CDCompletionBlock block)
{
    if (!block) return NULL;
    return ^(NSError *error) {
        dispatch_async(dispatch_get_main_queue(), ^{
            block(error);
        });
    };
}

void CDDispatchBlockToMainQueue(CDCodeBlock block)
{
    if ([NSThread isMainThread])
    {
        if (block) block();
    }
    else
    {
        dispatch_async(dispatch_get_main_queue(), ^{
            if (block) block();
        });
    }
}

CDCodeBlock CDMainQueueBlockFromCompletion(CDCodeBlock block)
{
    if (!block) return NULL;
    return ^{
        
        CDDispatchBlockToMainQueue(^{
            block();
        });
    };
}

void CDDispatchBlockAfter(CGFloat time, CDCodeBlock block)
{
    dispatch_after(dispatch_time(DISPATCH_TIME_NOW, (int64_t)(time * NSEC_PER_SEC)), dispatch_get_main_queue(), block);
}