//
//  PlmoknHttp.h
//  PlmoknAdsSdk-iOS
//
//
#import <Foundation/Foundation.h>

typedef void(^ZNetworkCompletionBlock)(NSData * _Nullable data, NSURLResponse * _Nullable response, NSError * _Nullable error);

@interface PlmoknHttp : NSObject

+ (void)sendPostRequest:(NSString *)urlString
               jsonData:(NSDictionary *)jsonData
             completion:(ZNetworkCompletionBlock)completion;

+ (void)fetchConfig:(NSString *) appId;

@end
