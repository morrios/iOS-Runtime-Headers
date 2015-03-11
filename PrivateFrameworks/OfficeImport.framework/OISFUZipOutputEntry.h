/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSString;

@interface OISFUZipOutputEntry : NSObject {
    boolis64Bit;
    boolisCompressed;
    boolisEncrypted;
    boolisWrittenDirectlyToFile;
    unsigned long long compressedDataOffset;
    unsigned long long compressedSize;
    unsigned int crc;
    NSString *name;
    unsigned long long offset;
    unsigned int time;
    unsigned long long uncompressedSize;
    unsigned long long utf8NameLength;
}

- (long long)compareByOffset:(id)arg1;
- (void)dealloc;
- (id)description;

@end