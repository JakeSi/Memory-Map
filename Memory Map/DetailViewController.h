//
//  DetailViewController.h
//  Memory Map
//
//  Created by Emily Hong on 2015-12-05.
//  Copyright © 2015 Emily Hong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

