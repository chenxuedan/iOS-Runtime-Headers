/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@interface AFUIGuideCacheManager : NSObject {
    NSObject<OS_dispatch_queue> *_cacheFileQueue;
    SAGuidanceGuideUpdate *_cachedGuideUpdate;
}

@property (nonatomic, readonly) SAGuidanceGuideSnippet *cachedGuideSnippet;
@property (nonatomic, readonly) NSNumber *cachedGuideTag;

+ (id)sharedManager;

- (void).cxx_destruct;
- (id)_aceObjectDictionaryAtFilepath:(id)arg1;
- (id)_cachedGuideUpdate;
- (id)_pathForCachedGuideUpdate;
- (BOOL)_shouldCheckForUpdateAtDate:(id)arg1;
- (void)_updateLastCheckedWithDate:(id)arg1;
- (id)cachedGuideSnippet;
- (id)cachedGuideTag;
- (void)clearCachedGuide;
- (id)init;
- (BOOL)shouldCheckForUpdate;
- (void)updateCacheWithGuideUpdate:(id)arg1 completion:(id /* block */)arg2;
- (void)updateLastCheckedDate;

@end
