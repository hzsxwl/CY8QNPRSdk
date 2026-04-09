//
//  PlmoknInterstitial.h
//  PlmoknAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class PlmoknRequest;
@protocol PlmoknInterstitialAdDelegate <NSObject>
@optional
-(void) interstitialAdLoadedSuccessfully:(NSString *) pid;
-(void) interstitialAdFailedToLoad:(NSString *) pid error:(NSError *)error;
-(void) interstitialAdPlayStarted;
-(void) interstitialAdPlayEnded;
-(void) interstitialAdWasTapped;
-(void) interstitialAdDidClose;
-(void) interstitialAdWasSkipped;

@end

@interface PlmoknInterstitial : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<PlmoknInterstitialAdDelegate> delegate;

- (instancetype)initWithRequest:(PlmoknRequest *)request;
- (BOOL)isAdReady;
- (void)loadAdData;
- (void)displayAd:(UIViewController *)rootViewController;
@end
