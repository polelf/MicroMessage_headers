/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:39:59 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface GroupMember : NSObject {
	NSString* m_nsMemberName; 
	unsigned m_uiMemberStatus; 
	NSString* m_nsNickName; 
	NSString* m_nsFullPY; 
	unsigned m_uiSex; 
	NSString* m_nsRemark; 
	NSString* m_nsRemarkShortPY; 
	NSString* m_nsRemarkFullPY; 
	NSString* m_nsCountry; 
	NSString* m_nsProvince; 
	NSString* m_nsCity; 
	NSString* m_nsSignature; 
}
@property (nonatomic,retain) NSString* m_nsSignature; 
@property (nonatomic,retain) NSString* m_nsCity; 
@property (nonatomic,retain) NSString* m_nsProvince; 
@property (nonatomic,retain) NSString* m_nsCountry; 
@property (nonatomic,retain) NSString* m_nsRemarkFullPY; 
@property (nonatomic,retain) NSString* m_nsRemarkShortPY; 
@property (nonatomic,retain) NSString* m_nsRemark; 
@property (assign,nonatomic) unsigned m_uiSex; 
@property (nonatomic,retain) NSString* m_nsFullPY; 
@property (nonatomic,retain) NSString* m_nsNickName; 
@property (assign,nonatomic) unsigned m_uiMemberStatus; 
@property (nonatomic,retain) NSString* m_nsMemberName; 
-(void)setM_nsMemberName:(id)arg1;
-(void)setM_nsFullPY:(id)arg1;
-(void)setM_nsRemarkFullPY:(id)arg1;
-(void)setM_nsRemark:(id)arg1;
-(void)setM_nsNickName:(id)arg1;
-(void)setM_nsCity:(id)arg1;
-(void)setM_nsProvince:(id)arg1;
-(void)setM_nsCountry:(id)arg1;
-(void)setM_uiSex:(unsigned long)arg1;
-(void)setM_nsSignature:(id)arg1;
-(void)setM_nsRemarkShortPY:(id)arg1;
-(void)setM_uiMemberStatus:(unsigned long)arg1;
-(id)init;
-(void)dealloc;
-(id)description;
@end