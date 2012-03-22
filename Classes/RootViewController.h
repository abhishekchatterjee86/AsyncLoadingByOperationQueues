//
//  RootViewController.h
//  AsyncLoadingByOperationQueues
//
//  Created by Abhishek chatterjee on 22/03/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface RootViewController : UITableViewController {
    
	NSMutableArray *photoNames;
    NSMutableArray *photoURLs;
	
    NSOperationQueue *operationQueue;
    
    NSMutableDictionary *cachedImages;
	
    UIActivityIndicatorView *spinner;
    UILabel *loadingLabel;
}

@end