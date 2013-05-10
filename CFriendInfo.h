/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:55 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */

#import <NSCoding.h>

@interface CFriendInfo : NSObject <NSCoding> {
	unsigned m_uiSyncTime; 
	NSArray* m_arrGroupList; 
	NSArray* m_arrFriendList; 
}
@property (nonatomic,retain) NSArray* m_arrFriendList; 
@property (nonatomic,retain) NSArray* m_arrGroupList; 
@property (assign,nonatomic) unsigned m_uiSyncTime; 
-(void)setM_arrFriendList:(id)arg1;
-(BOOL)LoadFriendData:(unsigned long)arg1 GroupId:(unsigned long)arg2;
-(void)SaveFriendData:(unsigned long)arg1 GroupId:(unsigned long)arg2;
-(void)SaveGroupData:(unsigned long)arg1;
-(void)setM_arrGroupList:(id)arg1;
-(BOOL)LoadGroupData:(unsigned long)arg1;
-(void)setM_uiSyncTime:(unsigned long)arg1;
-(id)initWithCoder:(id)arg1;
-(void)encodeWithCoder:(id)arg1;
-(id)init;
-(void)dealloc;
@end