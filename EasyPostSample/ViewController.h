//
//  ViewController.h
//  EasyPostSample
//
//  Created by Ruben Nieves on 5/21/14.
//  Copyright (c) 2014 TopBalance Software. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (weak, nonatomic) IBOutlet UIView *generatingView;
@property (weak, nonatomic) IBOutlet UIActivityIndicatorView *activity;
@property (weak, nonatomic) IBOutlet UILabel *activityMessage;
@property (weak, nonatomic) IBOutlet UIImageView *postImage;
@property (strong, nonatomic) NSMutableDictionary *fromDictionary;
@property (strong, nonatomic) NSMutableDictionary *toDictionary;
@property (strong, nonatomic) NSMutableDictionary *parcelDictionary;
@property (strong, nonatomic) NSMutableDictionary *shipmentDictionary;

@end
