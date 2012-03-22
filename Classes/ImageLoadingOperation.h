//
//  ImageLoadingOperation.h
//  AsyncLoadingByOperationQueues
//
//  Created by Abhishek chatterjee on 22/03/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

extern NSString *const ImageResultKey;
extern NSString *const URLResultKey;

@interface ImageLoadingOperation : NSOperation {
    NSURL *imageURL;
    id target;
    SEL action;
}

- (id)initWithImageURL:(NSURL *)imageURL target:(id)target action:(SEL)action;

@end
