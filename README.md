# ANHelperFunctions

A set of small useful helpers

# Details

## Defines

##### `float` SYSTEM_VERSION
Sytem version number. Example: `7.1.1`, `8.1`, `8.1.1`

##### `bool` IS_IPHONE_5
Returns `YES` if running on iPhone 5

##### `bool` IS_IPHONE_6
Returns `YES` if running on iPhone 6

##### `bool` IS_IPHONE_6_PLUS
Returns `YES` if running on iPhone 6 Plus

##### `bool` IS_IPHONE_5_OR_HIGHER
Returns `YES` if running on iPhone 5 or more modern device

##### `bool` IS_RETINA
Returns `YES` if running on device with Retina Display

##### `bool` IOS7
Returns `YES` if running on iOS 7 (7.x.x)

##### `bool` IOS8
Returns `YES` if running on iOS 8 (8.x.x)

##### `bool` IOS7_OR_HIGHER
Returns `YES` if running on iOS 7 or later

## Types

##### `void` ANCodeBlock
`typedef void (^ANCodeBlock)(void);`

##### `void` ANCompletionBlock
`typedef void (^ANCompletionBlock)(NSError *error);`

##### `bool` ANValidationBlock
`typedef BOOL(^ANValidationBlock)();`

## Methods

##### `void` ANDispatchBlockToMainQueue(ANCodeBlock);

Execute block on main thread

**@param** ANCodeBlock block for execution
  
##### `ANCodeBlock` ANMainQueueBlockFromCompletion(ANCodeBlock);

Creates new block instance with execution on main thread

##### `ANCompletionBlock` ANMainQueueCompletionFromCompletion(ANCompletionBlock);

Execute block on main thread

**@param** ANCompletionBlock block to execute

**@return** ANCompletionBlock returns new block with adding dispatch_main_queue

##### `void` ANDispatchCompletionBlockToMainQueue(ANCompletionBlock, NSError *);

Execute block on block on background thread

**@param** ANCompletionBlock block to execute

**@param** NSError*          instance for handling any blocks errors

##### `void` ANDispatchBlockAfter(CGFloat time, ANCodeBlock block);

Executes the block after specified time

**@param** time Time to after

**@param** block Block to execute
