# ANHelperFunctions

A set of small useful helpers

# Details

## Defines

* float `SYSTEM_VERSION` sytem version number. Example: `7.1.1`, `8.1`, `8.1.1`
* bool `IS_IPHONE_5` returns `YES` if running on iPhone 5
* bool `IS_IPHONE_6` returns `YES` if running on iPhone 6
* bool `IS_IPHONE_6_PLUS` returns `YES` if running on iPhone 6 Plus
* bool `IS_IPHONE_5_OR_HIGHER` returns `YES` if running on iPhone 5 or more modern device
* bool `IS_RETINA` returns `YES` if running on device with Retina Display
* bool `IOS7` returns `YES` if running on iOS 7 (7.x.x)
* bool `IOS8` returns `YES` if running on iOS 8 (8.x.x)
* bool `IOS7_OR_HIGHER` returns `YES` if running on iOS 7 or later

## Types

* `typedef void (^ANCodeBlock)(void);`
* `typedef void (^ANCompletionBlock)(NSError *error);`
* `typedef BOOL(^ANValidationBlock)();`

## Methods

* `void ANDispatchBlockToMainQueue(ANCodeBlock);`
