#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@class PlmoknRequest;
@protocol PlmoknSplashAdDelegate <NSObject>
@optional
-(void) splashAdDidShow;
-(void) splashAdFailedToShow:(NSString *) pid error:(NSError *)error;
-(void) splashAdLoadedSuccessfully:(NSString *) pid;
-(void) splashAdFailedToLoad:(NSString *) pid error:(NSError *)error;
-(void) splashAdWasClicked;
-(void) splashAdDidClose;
-(void) splashAdWasSkipped;

@end

@interface PlmoknSplash : NSObject
/// 广告代理对象
@property (nonatomic, weak) id<PlmoknSplashAdDelegate> delegate;
@property (nonatomic, weak) UIViewController *rootViewController;

- (instancetype)initWithRequest:(PlmoknRequest *)request
                              extra:(NSDictionary * _Nullable)extra;
- (instancetype)initWithRequest:(PlmoknRequest *)request;
- (BOOL)isAdReady;
-(void)loadAndShowAd;
- (void)loadAdData;
- (void)displayAd:(UIWindow *)window;
@end
