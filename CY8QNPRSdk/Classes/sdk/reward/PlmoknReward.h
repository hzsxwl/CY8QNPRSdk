//
//  PlmoknReward.h
//  PlmoknAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class PlmoknRequest;
@protocol PlmoknRewardAdDelegate <NSObject>

@required

-(void) rewardAdDidReceiveReward:(NSString *_Nonnull) transId;

@optional
-(void) rewardAdLoadedSuccessfully:(NSString *) pid;
-(void) rewardAdFailedToLoad:(NSString *) pid error:(NSError *)error;
-(void) rewardAdPlayStarted;
-(void) rewardAdPlayEnded;
-(void) rewardAdWasTapped;
-(void) rewardAdDidClose;
-(void) rewardAdWasSkipped;
-(void) rewardAdPlayError:(NSString *) pid error:(NSError *)error;

@end

@interface PlmoknReward : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<PlmoknRewardAdDelegate> delegate;

- (instancetype)initWithRequest:(PlmoknRequest *)request;
- (BOOL)isAdReady;
- (void)loadAdData;
- (void)displayAd:(UIViewController *)rootViewController options:(NSDictionary<NSString *, NSString *> * _Nullable)options;
@end

