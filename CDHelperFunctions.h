//
//  CDHelperFunctions.h
//  CtrlDo
//
//  Created by Oksana Kovalchuk on 6/7/14.
//  Copyright (c) 2014 ANODA. All rights reserved.
//

/**
 *  Execute block on main thread
 *
 *  @param CDCodeBlock block for execution
 */
void CDDispatchBlockToMainQueue(CDCodeBlock);


/**
 *  Creates new block instance with execution on main thread
 */
CDCodeBlock CDMainQueueBlockFromCompletion(CDCodeBlock);


/**
 *  Execute block on main thread
 *
 *  @param CDCompletionBlock block to execute
 *
 *  @return CDCompletionBlock returns new block with adding dispatch_main_queue
 */
CDCompletionBlock CDMainQueueCompletionFromCompletion(CDCompletionBlock);

/**
 *  Execute block on block on background thread
 *
 *  @param CDCompletionBlock block to execute
 *  @param NSError*          instance for handling any blocks errors
 */
void CDDispatchCompletionBlockToMainQueue(CDCompletionBlock, NSError *);

/**
 *  Executes the block after specified time
 *
 *  @param time Time to after
 *  @param block Block to execute
 */
void CDDispatchBlockAfter(CGFloat time, CDCodeBlock block);
