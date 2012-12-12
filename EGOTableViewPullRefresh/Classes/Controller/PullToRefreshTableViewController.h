//
//  PullToRefreshTableViewController.h
//  TableViewPull
//
//  Created by Jesse Collis on 1/07/10.
//  Copyright 2010 JC Multimedia Design. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "EGORefreshTableHeaderView.h"

@interface PullToRefreshTableViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>{
	EGORefreshTableHeaderView *refreshHeaderView;

	BOOL _reloading;
}

@property(assign,getter=isReloading) BOOL reloading;
@property(nonatomic,retain) EGORefreshTableHeaderView *refreshHeaderView;
@property(nonatomic,retain) IBOutlet UITableView *tableView;

- (void)refreshDataSource;
- (void)dataSourceDidFinishLoadingNewData;


@end
