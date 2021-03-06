/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLShuffledAlbumChangeNotification : PLAssetContainerChangeNotification {
    PLShuffledAlbum *_album;
    PLAssetContainerChangeNotification *_backingNotification;
    NSIndexSet *_changedIndexes;
    NSOrderedSet *_newSet;
}

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(id)arg3;

- (void)_calculateDiffs;
- (id)_changedObjects;
- (id)_diffDescription;
- (BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2;
- (id)album;
- (id)changedIndexes;
- (BOOL)countDidChange;
- (void)dealloc;
- (id)deletedIndexes;
- (id)description;
- (id)init;
- (id)initWithShuffledAlbum:(id)arg1 albumChangeNotification:(id)arg2;
- (id)insertedIndexes;
- (BOOL)keyAssetDidChange;
- (id)object;
- (BOOL)shouldReload;
- (BOOL)titleDidChange;

@end
