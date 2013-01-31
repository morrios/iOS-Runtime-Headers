/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLImportFileManager : NSObject  {
}

+ (BOOL)isCameraDirectoryFolderName:(id)arg1;
+ (BOOL)isImportDirectoryFolderName:(id)arg1;

- (BOOL)removeUnusedDCIMDirectoryAtPath:(id)arg1;
- (id)nextAvailableFilePathInDirectory:(id)arg1 withExtension:(id)arg2;
- (id)urlForNewDCIMFolderWithFolderNumber:(int*)arg1;
- (id)_DCIMFolderNameWithNumber:(int)arg1;
- (id)_dcimDirectory;

@end