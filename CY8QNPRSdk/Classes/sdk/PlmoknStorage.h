//
//  PlmoknStorage.h
//  PlmoknAdsSdk-iOS
//
//
#import "PlmoknDto.h"
#import <Foundation/Foundation.h>

@interface PlmoknStorage : NSObject
@property (nonatomic) int zCps;
+(instancetype) sharedInstance;
-(void) addStrategyData:(NSString *)adsId adData:(PlmoknDto *) zyxwvDto;
-(PlmoknDto *) getStrategyData: (NSString *)adsId;
@end

