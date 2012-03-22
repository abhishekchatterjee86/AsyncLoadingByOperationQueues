//
//  AsyncLoadingByOperationQueuesAppDelegate.h
//  AsyncLoadingByOperationQueues
//
//  Created by Abhishek chatterjee on 22/03/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AsyncLoadingByOperationQueuesAppDelegate : NSObject <UIApplicationDelegate> {
    
    UIWindow *window;
    UINavigationController *navigationController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet UINavigationController *navigationController;

@end

