/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:36 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface CdnDownloadTaskInfo : NSObject {
	NSString* m_nsClientMsgID; 
	unsigned m_uiFileLength; 
	NSString* m_nsTransInfo; 
	int m_nRetCode; 
}
@property (assign,nonatomic) int m_nRetCode; 
@property (nonatomic,retain) NSString* m_nsTransInfo; 
@property (assign,nonatomic) unsigned m_uiFileLength; 
@property (nonatomic,retain) NSString* m_nsClientMsgID; 
-(void)setM_nRetCode:(long)arg1;
-(void)setM_nsClientMsgID:(id)arg1;
-(void)setM_uiFileLength:(unsigned long)arg1;
-(void)setM_nsTransInfo:(id)arg1;
-(id)init;
-(void)dealloc;
@end