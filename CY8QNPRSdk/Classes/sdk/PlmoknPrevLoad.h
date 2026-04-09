//
//  PlmoknPrevLoad.h
//  PlmoknAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface PlmoknPrevLoad : NSObject
+(instancetype) sharedInstance;
-(void) beginAdPreload:(NSString *)rewardId interstitialId:(NSString *)interstitialId fullScreenId:(NSString *)fullScreenId userId:(NSString *)userId;
-(WindMillRewardVideoAd *) getPreloadedRewardAd;
-(WindMillIntersititialAd *) getPreloadedInterstitialAd;
-(WindMillIntersititialAd *) getPreloadedFullScreenAd;
-(NSString *) getInterstitialAdId;
-(NSString *) getFullScreenAdId;
@end

