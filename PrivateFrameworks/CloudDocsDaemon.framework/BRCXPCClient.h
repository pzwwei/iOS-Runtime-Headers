/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCXPCClient : NSObject <BRCForegroundClient, BRCProcessMonitorDelegate> {
    NSOperationQueue *_acceptOperationQueue;
    NSString *_applicationIdenfier;
    int _clientPid;
    NSXPCConnection *_connection;
    NSCountedSet *_containers;
    NSString *_debugIdentifier;
    NSString *_defaultContainerID;
    BOOL _dieOnInvalidate;
    NSSet *_entitledContainerIDs;
    BOOL _entitlementsCached;
    BOOL _hasCloudServices;
    BOOL _invalidated;
    BOOL _isForeground;
    BOOL _isProxyEntitled;
    BOOL _isSharingPrivateInterfaceEntitled;
    BOOL _isUsingUbiquity;
    NSMutableDictionary *_runningAcceptOperations;
    BRCAccountSession *_session;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *defaultContainerID;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) BOOL dieOnInvalidate;
@property (nonatomic, readonly) NSSet *entitledContainerIDs;
@property (nonatomic, readonly) BOOL hasPrivateSharingInterfaceEntitlement;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic) BOOL isUsingUbiquity;
@property (nonatomic, retain) BRCAccountSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__cacheEntitlements;
- (void)_addExternalDocumentReferenceTo:(id)arg1 underParent:(id)arg2 forceReparent:(BOOL)arg3 reply:(id /* block */)arg4;
- (BOOL)_canCreateContainerWithID:(id)arg1 error:(id*)arg2;
- (BOOL)_cloudEnabledPrecheckStatusForContainerIDs:(id)arg1 bundleID:(id)arg2;
- (BOOL)_cloudEnabledStatusForContainerIDs:(id)arg1 bundleID:(id)arg2 auditToken:(struct { unsigned int x1[8]; })arg3;
- (BOOL)_cloudSyncTCCDisabledForContainerMeta:(id)arg1 disabledBundleIDs:(id)arg2;
- (id)_containerIDsForPid:(int)arg1;
- (id)_disabledBundleIDs;
- (BOOL)_entitlementBooleanValueForKey:(id)arg1;
- (id)_entitlementValueForKey:(id)arg1 ofClass:(Class)arg2;
- (BOOL)_hasAccessToContainerID:(id)arg1 error:(id*)arg2;
- (BOOL)_hasPrivateIPCEntitlementForSelector:(SEL)arg1 error:(id*)arg2;
- (BOOL)_isContainerAccessAllowed;
- (BOOL)_isContainerProxyEntitled;
- (BOOL)_isContainerProxyWithError:(id*)arg1;
- (void)_setupContainerID:(id)arg1 andSendReply:(id /* block */)arg2;
- (void)_startDownloadItemsAtURLs:(id)arg1 pos:(unsigned int)arg2 options:(unsigned int)arg3 error:(id)arg4 reply:(id /* block */)arg5;
- (void)_startMonitoringProcessIfNeeded;
- (void)_stopMonitoringProcess;
- (void)accessLogicalOrPhysicalURL:(id)arg1 needsWrite:(BOOL)arg2 asynchronously:(BOOL)arg3 handler:(id /* block */)arg4;
- (void)addContainer:(id)arg1;
- (id)bundleID;
- (BOOL)canAccessPath:(const char *)arg1 needsWrite:(BOOL)arg2;
- (BOOL)canAccessPhysicalURL:(id)arg1;
- (BOOL)cloudEnabledStatus;
- (BOOL)cloudEnabledStatusForPID:(int)arg1;
- (id)connection;
- (id)copyContainerIDsForPid:(int)arg1 error:(id*)arg2;
- (id)defaultContainerID;
- (id)description;
- (BOOL)dieOnInvalidate;
- (id)entitledContainerIDs;
- (BOOL)hasPrivateSharingInterfaceEntitlement;
- (id)identifier;
- (id)initWithConnection:(id)arg1 session:(id)arg2;
- (void)invalidate;
- (BOOL)isSandboxed;
- (BOOL)isUsingUbiquity;
- (id)issueContainerExtensionForURL:(id)arg1 error:(id*)arg2;
- (void)process:(int)arg1 didBecomeForeground:(BOOL)arg2;
- (void)removeContainer:(id)arg1;
- (id)session;
- (void)setIsUsingUbiquity:(BOOL)arg1;
- (void)setSession:(id)arg1;
- (id)setupPrivateContainer:(id)arg1 root:(id)arg2 error:(id*)arg3;

@end