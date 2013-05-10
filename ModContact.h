/*
 * This header is generated by weak_classdump 0.2
 * on Friday, May 10, 2013, 3:40:46 PM China Standard Time
 * Operating System: Version 6.1.2 (Build 10B146)
 * weak_classdump is Freeware by Elias Limneos.
 *
 */


@interface ModContact : PBGeneratedMessage {
	unsigned int hasLevel:1; 
	unsigned int hasSex:1; 
	unsigned int hasAlbumFlag:1; 
	unsigned int hasAlbumStyle:1; 
	unsigned int hasVerifyInfo:1; 
	unsigned int hasSignature:1; 
	unsigned int hasCity:1; 
	unsigned int hasProvince:1; 
	unsigned int hasWeibo:1; 
	unsigned int hasVerifyContent:1; 
	unsigned int hasAlias:1; 
	unsigned int hasChatRoomOwner:1; 
	unsigned int hasWeiboNickname:1; 
	unsigned int hasAlbumBgimgId:1; 
	unsigned int hasCountry:1; 
	unsigned int hasBigHeadImgUrl:1; 
	unsigned int hasSmallHeadImgUrl:1; 
	unsigned int hasMyBrandList:1; 
	unsigned int hasChatRoomData:1; 
	unsigned int hasHeadImgMd5:1; 
	unsigned int hasEncryptUserName:1; 
	unsigned int hasSnsUserInfo:1; 
	unsigned int hasCustomizedInfo:1; 
	unsigned int hasUserName:1; 
	unsigned int hasNickName:1; 
	unsigned int hasPyinitial:1; 
	unsigned int hasQuanPin:1; 
	unsigned int hasImgBuf:1; 
	unsigned int hasRemark:1; 
	unsigned int hasRemarkPyinitial:1; 
	unsigned int hasRemarkQuanPin:1; 
	unsigned int hasDomainList:1; 
	unsigned int hasRoomInfoCount:1; 
	unsigned int hasWeiboFlag:1; 
	unsigned int hasContactType:1; 
	unsigned int hasChatRoomNotify:1; 
	unsigned int hasImgFlag:1; 
	unsigned int hasBitVal:1; 
	unsigned int hasBitMask:1; 
	unsigned int hasAddContactScene:1; 
	unsigned int hasSource:1; 
	unsigned int hasPersonalCard:1; 
	unsigned int hasHasWeiXinHdHeadImg:1; 
	unsigned int hasVerifyFlag:1; 
	int level; 
	int sex; 
	int albumFlag; 
	int albumStyle; 
	NSString* verifyInfo; 
	NSString* signature; 
	NSString* city; 
	NSString* province; 
	NSString* weibo; 
	NSString* verifyContent; 
	NSString* alias; 
	NSString* chatRoomOwner; 
	NSString* weiboNickname; 
	NSString* albumBgimgId; 
	NSString* country; 
	NSString* bigHeadImgUrl; 
	NSString* smallHeadImgUrl; 
	NSString* myBrandList; 
	NSString* chatRoomData; 
	NSString* headImgMd5; 
	NSString* encryptUserName; 
	SnsUserInfo* snsUserInfo; 
	CustomizedInfo* customizedInfo; 
	SKBuiltinString_t* userName; 
	SKBuiltinString_t* nickName; 
	SKBuiltinString_t* pyinitial; 
	SKBuiltinString_t* quanPin; 
	SKBuiltinBuffer_t* imgBuf; 
	SKBuiltinString_t* remark; 
	SKBuiltinString_t* remarkPyinitial; 
	SKBuiltinString_t* remarkQuanPin; 
	SKBuiltinString_t* domainList; 
	unsigned roomInfoCount; 
	unsigned weiboFlag; 
	unsigned contactType; 
	unsigned chatRoomNotify; 
	unsigned imgFlag; 
	unsigned bitVal; 
	unsigned bitMask; 
	unsigned addContactScene; 
	unsigned source; 
	unsigned personalCard; 
	unsigned hasWeiXinHdHeadImg; 
	unsigned verifyFlag; 
	NSMutableArray* mutableRoomInfoListList; 
}
@property (retain) NSString* encryptUserName; 
@property (assign) BOOL hasEncryptUserName; 
@property (retain) NSString* headImgMd5; 
@property (assign) BOOL hasHeadImgMd5; 
@property (retain) NSString* chatRoomData; 
@property (assign) BOOL hasChatRoomData; 
@property (retain) CustomizedInfo* customizedInfo; 
@property (assign) BOOL hasCustomizedInfo; 
@property (retain) NSString* myBrandList; 
@property (assign) BOOL hasMyBrandList; 
@property (retain) NSString* smallHeadImgUrl; 
@property (assign) BOOL hasSmallHeadImgUrl; 
@property (retain) NSString* bigHeadImgUrl; 
@property (assign) BOOL hasBigHeadImgUrl; 
@property (retain) NSString* country; 
@property (assign) BOOL hasCountry; 
@property (retain) SnsUserInfo* snsUserInfo; 
@property (assign) BOOL hasSnsUserInfo; 
@property (retain) NSString* albumBgimgId; 
@property (assign) BOOL hasAlbumBgimgId; 
@property (assign) int albumFlag; 
@property (assign) BOOL hasAlbumFlag; 
@property (assign) int albumStyle; 
@property (assign) BOOL hasAlbumStyle; 
@property (assign) unsigned weiboFlag; 
@property (assign) BOOL hasWeiboFlag; 
@property (retain) NSString* weiboNickname; 
@property (assign) BOOL hasWeiboNickname; 
@property (retain) NSString* chatRoomOwner; 
@property (assign) BOOL hasChatRoomOwner; 
@property (retain) NSString* alias; 
@property (assign) BOOL hasAlias; 
@property (retain) NSString* verifyContent; 
@property (assign) BOOL hasVerifyContent; 
@property (retain) NSString* weibo; 
@property (assign) BOOL hasWeibo; 
@property (assign) unsigned source; 
@property (assign) BOOL hasSource; 
@property (assign) int level; 
@property (assign) BOOL hasLevel; 
@property (retain) NSString* verifyInfo; 
@property (assign) BOOL hasVerifyInfo; 
@property (assign) unsigned verifyFlag; 
@property (assign) BOOL hasVerifyFlag; 
@property (assign) unsigned hasWeiXinHdHeadImg; 
@property (assign) BOOL hasHasWeiXinHdHeadImg; 
@property (assign) unsigned personalCard; 
@property (assign) BOOL hasPersonalCard; 
@property (retain) NSString* signature; 
@property (assign) BOOL hasSignature; 
@property (retain) NSString* city; 
@property (assign) BOOL hasCity; 
@property (retain) NSString* province; 
@property (assign) BOOL hasProvince; 
@property (assign) unsigned addContactScene; 
@property (assign) BOOL hasAddContactScene; 
@property (assign) unsigned chatRoomNotify; 
@property (assign) BOOL hasChatRoomNotify; 
@property (retain) SKBuiltinString_t* domainList; 
@property (assign) BOOL hasDomainList; 
@property (retain) NSMutableArray* mutableRoomInfoListList; 
@property (assign) unsigned roomInfoCount; 
@property (assign) BOOL hasRoomInfoCount; 
@property (assign) unsigned contactType; 
@property (assign) BOOL hasContactType; 
@property (retain) SKBuiltinString_t* remarkQuanPin; 
@property (assign) BOOL hasRemarkQuanPin; 
@property (retain) SKBuiltinString_t* remarkPyinitial; 
@property (assign) BOOL hasRemarkPyinitial; 
@property (retain) SKBuiltinString_t* remark; 
@property (assign) BOOL hasRemark; 
@property (assign) unsigned imgFlag; 
@property (assign) BOOL hasImgFlag; 
@property (assign) unsigned bitVal; 
@property (assign) BOOL hasBitVal; 
@property (assign) unsigned bitMask; 
@property (assign) BOOL hasBitMask; 
@property (retain) SKBuiltinBuffer_t* imgBuf; 
@property (assign) BOOL hasImgBuf; 
@property (assign) int sex; 
@property (assign) BOOL hasSex; 
@property (retain) SKBuiltinString_t* quanPin; 
@property (assign) BOOL hasQuanPin; 
@property (retain) SKBuiltinString_t* pyinitial; 
@property (assign) BOOL hasPyinitial; 
@property (retain) SKBuiltinString_t* nickName; 
@property (assign) BOOL hasNickName; 
@property (retain) SKBuiltinString_t* userName; 
@property (assign) BOOL hasUserName; 
+(id)parseFromData:(id)arg1;
-(id)SetUserName:(id)arg1;
-(id)SetVerifyContent:(id)arg1;
-(int)serializedSize;
-(void)setHasWeiboFlag:(BOOL)arg1;
-(void)setHasSignature:(BOOL)arg1;
-(void)setHasCity:(BOOL)arg1;
-(void)setHasProvince:(BOOL)arg1;
-(void)setHasCountry:(BOOL)arg1;
-(void)setHasChatRoomData:(BOOL)arg1;
-(id)SetWeiboFlag:(unsigned)arg1;
-(id)SetSignature:(id)arg1;
-(id)SetCity:(id)arg1;
-(id)SetProvince:(id)arg1;
-(id)SetCountry:(id)arg1;
-(id)SetChatRoomData:(id)arg1;
-(void)setWeiboFlag:(unsigned)arg1;
-(void)setProvince:(id)arg1;
-(void)setChatRoomData:(id)arg1;
-(void)setHasSex:(BOOL)arg1;
-(void)setHasRemark:(BOOL)arg1;
-(void)setHasNickName:(BOOL)arg1;
-(id)SetSex:(int)arg1;
-(id)SetRemark:(id)arg1;
-(id)SetNickName:(id)arg1;
-(void)setSex:(int)arg1;
-(void)setRemark:(id)arg1;
-(void)setHasUserName:(BOOL)arg1;
-(void)writeToCodedOutputStream:(id)arg1;
-(id)mergeFromCodedInputStream:(id)arg1;
-(void)setHasEncryptUserName:(BOOL)arg1;
-(void)setHasHeadImgMd5:(BOOL)arg1;
-(void)setHasCustomizedInfo:(BOOL)arg1;
-(void)setHasMyBrandList:(BOOL)arg1;
-(void)setHasSmallHeadImgUrl:(BOOL)arg1;
-(void)setHasBigHeadImgUrl:(BOOL)arg1;
-(void)setHasSnsUserInfo:(BOOL)arg1;
-(void)setHasAlbumBgimgId:(BOOL)arg1;
-(void)setHasAlbumFlag:(BOOL)arg1;
-(void)setHasAlbumStyle:(BOOL)arg1;
-(void)setHasWeiboNickname:(BOOL)arg1;
-(void)setHasChatRoomOwner:(BOOL)arg1;
-(void)setHasAlias:(BOOL)arg1;
-(void)setHasVerifyContent:(BOOL)arg1;
-(void)setHasWeibo:(BOOL)arg1;
-(void)setHasSource:(BOOL)arg1;
-(void)setHasLevel:(BOOL)arg1;
-(void)setHasVerifyInfo:(BOOL)arg1;
-(void)setHasVerifyFlag:(BOOL)arg1;
-(void)setHasHasWeiXinHdHeadImg:(BOOL)arg1;
-(void)setHasPersonalCard:(BOOL)arg1;
-(void)setHasAddContactScene:(BOOL)arg1;
-(void)setHasChatRoomNotify:(BOOL)arg1;
-(void)setHasDomainList:(BOOL)arg1;
-(void)setHasRoomInfoCount:(BOOL)arg1;
-(void)setHasContactType:(BOOL)arg1;
-(void)setHasRemarkQuanPin:(BOOL)arg1;
-(void)setHasRemarkPyinitial:(BOOL)arg1;
-(void)setHasImgFlag:(BOOL)arg1;
-(void)setHasBitVal:(BOOL)arg1;
-(void)setHasBitMask:(BOOL)arg1;
-(void)setHasImgBuf:(BOOL)arg1;
-(void)setHasQuanPin:(BOOL)arg1;
-(void)setHasPyinitial:(BOOL)arg1;
-(id)SetEncryptUserName:(id)arg1;
-(id)SetHeadImgMd5:(id)arg1;
-(id)SetCustomizedInfo:(id)arg1;
-(id)SetMyBrandList:(id)arg1;
-(id)SetSmallHeadImgUrl:(id)arg1;
-(id)SetBigHeadImgUrl:(id)arg1;
-(id)SetSnsUserInfo:(id)arg1;
-(id)SetAlbumBgimgId:(id)arg1;
-(id)SetAlbumFlag:(int)arg1;
-(id)SetAlbumStyle:(int)arg1;
-(id)SetWeiboNickname:(id)arg1;
-(id)SetChatRoomOwner:(id)arg1;
-(id)SetAlias:(id)arg1;
-(id)SetWeibo:(id)arg1;
-(id)SetSource:(unsigned)arg1;
-(id)SetLevel:(int)arg1;
-(id)SetVerifyInfo:(id)arg1;
-(id)SetVerifyFlag:(unsigned)arg1;
-(id)SetHasWeiXinHdHeadImg:(unsigned)arg1;
-(id)SetPersonalCard:(unsigned)arg1;
-(id)SetAddContactScene:(unsigned)arg1;
-(id)SetChatRoomNotify:(unsigned)arg1;
-(id)SetDomainList:(id)arg1;
-(id)addRoomInfoList:(id)arg1;
-(id)SetRoomInfoCount:(unsigned)arg1;
-(id)SetContactType:(unsigned)arg1;
-(id)SetRemarkQuanPin:(id)arg1;
-(id)SetRemarkPyinitial:(id)arg1;
-(id)SetImgFlag:(unsigned)arg1;
-(id)SetBitVal:(unsigned)arg1;
-(id)SetBitMask:(unsigned)arg1;
-(id)SetImgBuf:(id)arg1;
-(id)SetQuanPin:(id)arg1;
-(id)SetPyinitial:(id)arg1;
-(id)roomInfoListList;
-(void)setAlbumFlag:(int)arg1;
-(void)setAlbumStyle:(int)arg1;
-(void)setVerifyFlag:(unsigned)arg1;
-(void)setHasWeiXinHdHeadImg:(unsigned)arg1;
-(void)setPersonalCard:(unsigned)arg1;
-(void)setAddContactScene:(unsigned)arg1;
-(void)setChatRoomNotify:(unsigned)arg1;
-(void)setRoomInfoCount:(unsigned)arg1;
-(void)setContactType:(unsigned)arg1;
-(void)setImgFlag:(unsigned)arg1;
-(void)setBitVal:(unsigned)arg1;
-(void)setBitMask:(unsigned)arg1;
-(void)setEncryptUserName:(id)arg1;
-(void)setHeadImgMd5:(id)arg1;
-(void)setCustomizedInfo:(id)arg1;
-(void)setMyBrandList:(id)arg1;
-(void)setSmallHeadImgUrl:(id)arg1;
-(void)setBigHeadImgUrl:(id)arg1;
-(void)setSnsUserInfo:(id)arg1;
-(void)setAlbumBgimgId:(id)arg1;
-(void)setWeiboNickname:(id)arg1;
-(void)setChatRoomOwner:(id)arg1;
-(void)setVerifyContent:(id)arg1;
-(void)setWeibo:(id)arg1;
-(void)setVerifyInfo:(id)arg1;
-(void)setDomainList:(id)arg1;
-(void)setMutableRoomInfoListList:(id)arg1;
-(void)setRemarkQuanPin:(id)arg1;
-(void)setRemarkPyinitial:(id)arg1;
-(void)setImgBuf:(id)arg1;
-(void)setQuanPin:(id)arg1;
-(void)setPyinitial:(id)arg1;
-(id)addRoomInfoListFromArray:(id)arg1;
-(void)setCountry:(id)arg1;
-(void)setAlias:(id)arg1;
-(void)setLevel:(int)arg1;
-(void)setSource:(unsigned)arg1;
-(void)setNickName:(id)arg1;
-(void)setSignature:(id)arg1;
-(void)setUserName:(id)arg1;
-(void)setCity:(id)arg1;
-(void)dealloc;
@end