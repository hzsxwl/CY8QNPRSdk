//
//  PlmoknNativeAd.h
//  PlmoknAdsSdk-iOS
//
//


#import <Foundation/Foundation.h>
#import <WindMillSDK/WindMillSDK.h>

@interface PlmoknNativeAd : NSObject
- (instancetype)initWithAd:(WindMillNativeAd *) ad;
- (WindMillNativeAd *)getAd;
@end

