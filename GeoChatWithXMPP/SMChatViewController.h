//
//  SMChatViewController.h
//  GeoChatWithXMPP
//
//  Created by Данил on 26/02/2015.
//  Copyright (c) 2015 Данил. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "SMMessageDelegate.h"   
#import <CoreLocation/CoreLocation.h>

@interface SMChatViewController : UIViewController<SMMessageDelegate, CLLocationManagerDelegate>{

    UITextField     *messageField;
    NSString        *chatWithUser;
    UITableView     *tView;
    NSMutableArray  *messages;
    NSString        *GeoLtitude;
    NSString        *GeoLength;

}

@property (nonatomic,retain) IBOutlet UITextField *messageField;
@property (nonatomic,retain) NSString *chatWithUser;
@property (nonatomic,retain) NSString *GeoLtitude;
@property (nonatomic,retain) NSString *GeoLength;
@property (strong, nonatomic) CLLocation *currentLocation;

- (void)startUpdatingCurrentLocation;

@property (nonatomic,retain) IBOutlet UITableView *tView;

- (id) initWithUser:(NSString *) userName;
- (IBAction) sendMessage;
- (IBAction) closeChat;


@end