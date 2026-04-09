//
//  PlmoknBanner.h
//  PlmoknAdsSdk-iOS
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
@class PlmoknRequest;
@class PlmoknBanner;

NS_ASSUME_NONNULL_BEGIN

@protocol PlmoknBannerDelegate <NSObject>

@optional

- (void)bannerAdDidAutoRefresh:(PlmoknBanner *)bannerAdView;

- (void)bannerAdAutoRefreshFailed:(NSError *)error;

- (void)bannerAdLoadedSuccessfully:(PlmoknBanner *)bannerAdView;

- (void)bannerAdFailedToLoad:(NSError *)error;

- (void)bannerAdWasDisplayed;

- (void)bannerAdWasTapped;

- (void)bannerAdWillExitApp;

- (void)bannerAdWillEnterFullScreen;
- (void)bannerAdDidExitFullScreen;
- (void)bannerAdWasRemoved;
@end

@interface PlmoknBanner : NSObject

@property (nonatomic, weak) id<PlmoknBannerDelegate> delegate;

@property (nonatomic, weak) UIViewController *viewController;

@property (nonatomic) BOOL animated;

@property (nonatomic, assign) CGSize adSize;
@property(nullable, nonatomic,copy) UIColor *backgroundColor;

- (instancetype)initWithRequest:(PlmoknRequest *)request;

- (instancetype)initWithRequest:(PlmoknRequest *)request
                     expectSize:(CGSize)expectSize;

- (void)loadAdData;
- (BOOL)isAdReady;
- (UIView *)adView;
@end
NS_ASSUME_NONNULL_END

