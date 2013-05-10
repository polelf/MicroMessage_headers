/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:41:43 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <WCDataProviderDelegate.h>

@interface WCHomepageMgr : NSObject <WCDataProviderDelegate> {
	NSString* m_username; 
	id<WCHomepageDelegate> m_delegate; 
	NSMutableArray* m_cache; 
	MyWCDB* m_database; 
	WCHomepageDataProvider* m_dataProvider; 
	int m_refCount; 
}
@property (nonatomic,retain) NSString* m_username; 
@property (nonatomic,retain) WCHomepageDataProvider* m_dataProvider; 
@property (nonatomic,retain) MyWCDB* m_database; 
@property (nonatomic,retain) NSMutableArray* m_cache; 
@property (assign,nonatomic) id<WCHomepageDelegate> m_delegate; 
+(id)homepageMgrForUser:(id)arg1;
-(void)setM_delegate:(id)arg1;
-(void)onServiceMemoryWarning;
-(void)setM_username:(id)arg1;
-(BOOL)updateHead;
-(void)onNoMoreDataWithRet:(int)arg1;
-(void)setM_database:(id)arg1;
-(BOOL)updateHeadWithSource:(int)arg1;
-(void)onReturnIsAllData:(id)arg1;
-(void)onTotalCountChanged:(int)arg1;
-(void)onDataUpdated:(id)arg1 andData:(id)arg2 withChangedTime:(unsigned long)arg3;
-(void)onReturnBGUserInfo:(id)arg1;
-(void)setM_dataProvider:(id)arg1;
-(void)setM_cache:(id)arg1;
-(id)findDataItemInCacheByItemID:(id)arg1;
-(void)modifyCache:(id)arg1;
-(void)deleteDataItem:(id)arg1 notify:(BOOL)arg2;
-(void)modifyDataItem:(id)arg1 notify:(BOOL)arg2;
-(void)addDataItem:(id)arg1 notify:(BOOL)arg2;
-(id)getHomepageData;
-(BOOL)updateTail;
-(void)endHomepage;
-(void)beginHomepage;
-(id)init;
-(void)dealloc;
@end