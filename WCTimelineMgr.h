/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:53 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <WCDataProviderDelegate.h>

@interface WCTimelineMgr : NSObject <WCDataProviderDelegate> {
	id<WCTimelineDelegate> m_delegate; 
	NSMutableArray* m_cache; 
	MyWCDB* m_database; 
	WCTimelineDataProvider* m_dataProvider; 
	BOOL isNoMoreData; 
	unsigned m_showFlag; 
	BOOL m_needWriteBackDataItemUpdateTime; 
	BOOL m_needLoadDataItemUpdateTime; 
	NSMutableDictionary* m_dataUpdateTime; 
}
@property (assign,nonatomic) unsigned m_showFlag; 
@property (assign,nonatomic) BOOL isNoMoreData; 
@property (nonatomic,retain) WCTimelineDataProvider* m_dataProvider; 
@property (nonatomic,retain) MyWCDB* m_database; 
@property (nonatomic,retain) NSMutableArray* m_cache; 
@property (assign,nonatomic) id<WCTimelineDelegate> m_delegate; 
-(void)setM_delegate:(id)arg1;
-(void)onServiceMemoryWarning;
-(void)onServiceTerminate;
-(void)onServiceEnterBackground;
-(void)onNoMoreDataWithRet:(int)arg1;
-(void)setM_database:(id)arg1;
-(void)onReturnIsAllData:(id)arg1;
-(void)onDataUpdated:(id)arg1 andData:(id)arg2 withChangedTime:(unsigned long)arg3;
-(void)setM_dataProvider:(id)arg1;
-(void)setM_cache:(id)arg1;
-(void)onReturnShowFlag:(unsigned long)arg1;
-(void)onDataUpdated:(id)arg1 withChangedTime:(unsigned long)arg2;
-(id)findDataItemInCacheByItemID:(id)arg1;
-(void)modifyCache:(id)arg1;
-(void)deleteDataItem:(id)arg1 notify:(BOOL)arg2;
-(void)modifyDataItem:(id)arg1 notify:(BOOL)arg2;
-(void)addDataItem:(id)arg1 notify:(BOOL)arg2;
-(id)pathForDataItemUpdateTime;
-(void)setChangedTimeForDatas:(id)arg1 withChangedTime:(unsigned long)arg2;
-(unsigned long)getMinChangedTimeBetween:(id)arg1 andMinID:(id)arg2;
-(void)trySaveDataItemUpdateTime;
-(void)tryLoadDataItemUpdateTime;
-(void)setIsNoMoreData:(BOOL)arg1;
-(void)setM_showFlag:(unsigned long)arg1;
-(BOOL)updateDataTail:(id)arg1;
-(BOOL)updateDataHead:(id)arg1;
-(BOOL)updateData:(id)arg1 WithReferID:(id)arg2;
-(id)getDataItem:(id)arg1 OfIndex:(int)arg2;
-(int)countOfDataItem:(id)arg1;
-(void)beginSession;
-(void)endSession;
-(id)init;
-(void)dealloc;
@end