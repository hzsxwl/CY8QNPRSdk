//
//  PlmoknAdSdk.h
//  PlmoknAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>

typedef NS_ENUM (NSInteger, PlmoknAcceptStatus) {
    PlmoknUnknown = 0,
    PlmoknAccepted,
    PlmoknDenied,
};

@interface PlmoknAdSdk : NSObject
+(instancetype) sharedInstance;
-(void)setupWithAppId:(NSString *)appId;

-(void)setDebugModeEnabled:(BOOL)enable;

-(void)setGDPRStatus:(PlmoknAcceptStatus)status;
-(void)beginAdPreload:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
@end

