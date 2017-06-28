//
//  WSUserInfoHandler.h
//  WSUserInfoHandler
//
//  Created by 万圣 on 16/3/29.
//  Copyright © 2016年 万圣. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <AddressBook/AddressBook.h>
#import <CoreTelephony/CTTelephonyNetworkInfo.h>
#import <CoreTelephony/CTCarrier.h>
#import <Photos/Photos.h>
#define min(a,b)    ((a) < (b) ? (a) : (b))
#define max(a,b)    ((a) > (b) ? (a) : (b))

#define BUFFERSIZE  4000

#define  KEY_USERNAME_PASSWORD @"com.huifenqi.brokerapps"

#define  KEY_USERNAME @"com.huifenqi.brokerapps"

@interface WSUserInfoHandler : NSObject
typedef void (^success)(NSMutableDictionary * dic);
typedef void (^contactSuccess)(NSArray * list);
    
@property (nonatomic,strong)success successBlock;
@property (nonatomic,strong)contactSuccess contactSuccessBlock;
    
@property (nonatomic,assign)CLLocationCoordinate2D coor;

- (NSString *)getNetType;
- (NSString *)getUUID;
- (void)startGatherUserInfoWith:(success)success;
+ (instancetype)sharedManger;
- (NSString *)getIPAddressNew;
- (NSString *)getIPAddress:(BOOL)preferIPv4;
- (void)getContactListWith:(contactSuccess)success;
@end
