//
//  PlmoknNativeAdView.h
//  PlmoknAdsSdk-iOS
//
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class PlmoknNativeAdView;
@class PlmoknNativeAd;
@protocol PlmoknNativeAdViewDelegate <NSObject>
@optional
- (void)onNativeAdViewRenderSucceeded:(PlmoknNativeAdView *)nativeAdView;
- (void)onNativeAdViewRenderFailed:(NSError *)error;
- (void)onNativeAdViewExposed;
- (void)onNativeAdViewTapped;
- (void)onNativeAdViewDisliked:(NSString *) reason;

@end
@interface PlmoknNativeAdView : NSObject
+ (instancetype) createAdView;

@property(nonatomic) CGRect frame;
@property (nonatomic, weak) id<PlmoknNativeAdViewDelegate> delegate;
@property (nonatomic, weak) UIViewController *viewController;
- (void)updateData:(PlmoknNativeAd *)nativeAd;
- (UIView *)adView;
@end
