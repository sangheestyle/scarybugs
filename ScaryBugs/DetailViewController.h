//
//  DetailViewController.h
//  ScaryBugs
//
//  Created by Sanghee on 4/24/18.
//  Copyright © 2018 Sanghee. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

