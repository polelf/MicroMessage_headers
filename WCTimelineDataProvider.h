/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:41:24 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <PBMessageObserverDelegate.h>

@interface WCTimelineDataProvider : NSObject <PBMessageObserverDelegate> {
	NSString* fpHash; 
	BOOL isWorking; 
	id<WCDataProviderDelegate> delegate; 
}
@property (assign,nonatomic) id<WCDataProviderDelegate> delegate; 
-(void)MessageReturn:(id)arg1 Event:(unsigned long)arg2;
-(void)updateWithReferID:(id)arg1;
-(void)saveResponseListForFutureList:(id)arg1;
-(id)converListToList:(id)arg1;
-(void)internalSaveResponseListForFutureList:(id)arg1;
-(void)requestForSnsTimeLineRequest:(id)arg1 minID:(id)arg2 lastRequestTime:(unsigned long)arg3;
-(BOOL)responseForSnsTimeLineResponse:(id)arg1 Event:(unsigned long)arg2;
-(void)SafeMD5;
-(void)updateChangedItemsWithReferID:(id)arg1 bottomID:(id)arg2 minChangedTime:(unsigned long)arg3;
-(id)init;
-(void)dealloc;
-(void)setDelegate:(id)arg1;
@end