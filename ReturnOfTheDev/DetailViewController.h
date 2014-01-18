//
//  DetailViewController.h
//  ReturnOfTheDev
//
//  Created by Griffin on 19/01/14.
//  Copyright (c) 2014 Griffin. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
