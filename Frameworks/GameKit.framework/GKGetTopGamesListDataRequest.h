/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSDictionary;



@interface GKGetTopGamesListDataRequest : GKDataRequest 
{
    NSDictionary *_topGamesList;
}

@property(retain) NSDictionary *topGamesList;


- (id)key;
- (id)cacheKey;
- (void)dealloc;
- (id)topGamesList;
- (void)setTopGamesList:(id)arg1;
- (NSInteger)cachePriority;
- (NSInteger)cacheType;
- (BOOL)authenticationRequired;
- (void)handleResponseFromServer:(id)arg1 error:(id)arg2;

@end