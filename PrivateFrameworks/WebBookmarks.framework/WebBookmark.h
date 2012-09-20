/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/WebBookmarks.framework/WebBookmarks
 */

@class NSString, NSData, NSDictionary, NSDate;

@interface WebBookmark : NSObject  {
    BOOL _folder;
    NSString *_title;
    NSString *_url;
    NSString *_UUID;
    NSString *_serverID;
    NSString *_syncKey;
    NSData *_syncData;
    BOOL _editable;
    BOOL _deletable;
    BOOL _hidden;
    BOOL _fetchedIconData;
    NSData *_iconData;
    BOOL _locallyAdded;
    int _archiveStatus;
    NSDictionary *_extraAttributes;
    NSDictionary *_localAttributes;
    unsigned int _id;
    unsigned int _parentID;
    unsigned int _specialID;
    unsigned int _orderIndex;
    BOOL _inserted;
    BOOL _needsSyncUpdate;
}

@property(retain) NSString * serverID;
@property(retain) NSString * syncKey;
@property(retain) NSData * syncData;
@property(retain) NSString * previewText;
@property BOOL fetchedIconData;
@property(retain) NSData * iconData;
@property BOOL locallyAdded;
@property int archiveStatus;
@property(retain) NSDate * dateLastArchived;
@property(retain) NSDate * dateAdded;
@property(retain) NSDate * dateLastViewed;
@property(retain) NSDate * dateLastFetched;
@property(retain) NSDictionary * nextPageURLs;
@property(retain) NSString * localPreviewText;
@property BOOL needsSyncUpdate;
@property(retain) NSString * title;
@property(retain) NSString * address;
@property(readonly) unsigned int parentID;
@property(readonly) unsigned int identifier;
@property(readonly) NSString * UUID;
@property(readonly) unsigned int specialID;
@property(getter=isEditable,readonly) BOOL editable;
@property(getter=isDeletable,readonly) BOOL deletable;
@property(getter=isHidden,readonly) BOOL hidden;
@property(getter=isFolder,readonly) BOOL folder;
@property(getter=isInserted,readonly) BOOL inserted;
@property(retain) NSDictionary * extraAttributes;
@property(retain) NSDictionary * localAttributes;


- (void)setAddress:(id)arg1;
- (id)address;
- (id)localizedTitle;
- (unsigned int)identifier;
- (BOOL)isInserted;
- (id)description;
- (void)dealloc;
- (id)init;
- (id)extraAttributes;
- (id)iconData;
- (id)UUID;
- (id)title;
- (BOOL)isEditable;
- (void)setTitle:(id)arg1;
- (BOOL)isHidden;
- (id)previewText;
- (BOOL)isDeletable;
- (BOOL)shouldReattemptArchive;
- (BOOL)writeOfflineWebView:(id)arg1 asArchive:(BOOL)arg2 inReaderForm:(BOOL)arg3;
- (id)webarchivePathForNextPageURL:(id)arg1;
- (id)webarchivePathInReaderForm:(BOOL)arg1 fileExists:(BOOL*)arg2;
- (void)_removeDirectoryAtPath:(id)arg1;
- (unsigned long long)_sizeForFileOrDirectory:(id)arg1 withAttributes:(id)arg2;
- (id)_suggestedFileNameForWebView:(id)arg1;
- (void)setLocalPreviewText:(id)arg1;
- (id)nextPageURLs;
- (void)setNextPageURLs:(id)arg1;
- (void)setTitle:(id)arg1 previewText:(id)arg2 dateLastViewed:(id)arg3 dateLastFetched:(id)arg4;
- (void)setDateLastFetched:(id)arg1;
- (id)dateLastFetched;
- (void)setDateLastViewed:(id)arg1;
- (void)setDateAdded:(id)arg1;
- (id)dateAdded;
- (id)dateLastArchived;
- (void)setLocallyAdded:(BOOL)arg1;
- (void)setPreviewText:(id)arg1;
- (id)localPreviewText;
- (void)_modifyLocalReadingListAttributes:(id)arg1;
- (void)_modifyExtraReadingListAttributes:(id)arg1;
- (id)_readingListPropertyNamed:(id)arg1;
- (void)setFetchedIconData:(BOOL)arg1;
- (void)setIconData:(id)arg1;
- (void)cleanupRedundantPreviewText;
- (id)syncData;
- (id)initReadingListBookmarkWithTitle:(id)arg1 address:(id)arg2 previewText:(id)arg3 iconData:(id)arg4;
- (void)_markSpecial:(unsigned int)arg1;
- (void)_setHidden:(BOOL)arg1;
- (void)_setInserted:(BOOL)arg1;
- (void)_setID:(unsigned int)arg1;
- (BOOL)locallyAdded;
- (BOOL)fetchedIconData;
- (void)setSyncData:(id)arg1;
- (BOOL)fullArchiveAvailable;
- (void)_setOrderIndex:(unsigned int)arg1;
- (void)_setParentID:(unsigned int)arg1;
- (void)clearArchive;
- (id)_initWithSqliteRow:(struct sqlite3_stmt { }*)arg1;
- (void)clearArchiveSynchronously;
- (void)setDateLastArchived:(id)arg1;
- (unsigned long long)archiveSize;
- (id)dateLastViewed;
- (void)setArchiveStatus:(int)arg1;
- (int)archiveStatus;
- (unsigned int)_orderIndex;
- (void)setNeedsSyncUpdate:(BOOL)arg1;
- (BOOL)needsSyncUpdate;
- (void)setLocalAttributes:(id)arg1;
- (id)localAttributes;
- (BOOL)isFolder;
- (unsigned int)specialID;
- (BOOL)isReadingListFolder;
- (id)initFolderWithParentID:(unsigned int)arg1;
- (id)initStaticWithTitle:(id)arg1 address:(id)arg2;
- (BOOL)isReadingListItem;
- (id)shortTypeDescription;
- (id)initWithTitle:(id)arg1 address:(id)arg2;
- (void)setExtraAttributes:(id)arg1;
- (void)_setUUID:(id)arg1;
- (id)syncKey;
- (void)setSyncKey:(id)arg1;
- (id)serverID;
- (void)setServerID:(id)arg1;
- (unsigned int)parentID;

@end