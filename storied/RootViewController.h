//
//  RootViewController.h
//  storied
//
//  Created by Jonah Williams on 7/16/11.
//  Copyright 2011 Carbon Five. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface RootViewController : UITableViewController {

}

		
@property (nonatomic, retain) IBOutlet DetailViewController *detailViewController;

@end
