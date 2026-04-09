//
//  PlmoknNativeAdManager.h
//  PlmoknAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class PlmoknRequest;
@class PlmoknNativeAd;
@class PlmoknNativeAdManager;

NS_ASSUME_NONNULL_BEGIN
@protocol PlmoknNativeAdManagerDelegate <NSObject>

@optional
- (void)nativeAdManagerLoadedSuccessfully:(PlmoknNativeAdManager *)nativeAdsManager;
- (void)nativeAdManagerFailedToLoad:(NSError *)error;

@end


@interface PlmoknNativeAdManager : NSObject

@property (nonatomic, weak) id<PlmoknNativeAdManagerDelegate> delegate;

@property (nonatomic, assign, readwrite) CGSize adSize;

- (instancetype)initWithRequest:(PlmoknRequest *)request;

- (void)loadAdData:(NSInteger)count;

- (NSArray<PlmoknNativeAd *> * _Nullable)getNativeAds;

@end

NS_ASSUME_NONNULL_END
