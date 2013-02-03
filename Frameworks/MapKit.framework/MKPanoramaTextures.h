/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKPanoramaTextures : NSObject {
    NSUInteger baseLevel;
    NSUInteger maxLevel;
    BOOL multitexturing;
    NSUInteger numLods;
    BOOL pendingFade;
    void *scratchBytes;
    struct CGContext { } *scratchContext;
    double **tileBirths;
    NSInteger *tileLod;
    NSUInteger **tileTextures;
}

- (void)bindTextureForTileAtIndex:(NSUInteger)arg1;
- (void)dealloc;
- (BOOL)hasBaseLevel;
- (id)initWithNumLevels:(NSUInteger)arg1 baseLevel:(NSUInteger)arg2;
- (BOOL)pendingFade;
- (void)setTexture:(NSUInteger)arg1 atLocation:(struct { struct { NSUInteger x_1_1_1; NSUInteger x_1_1_2; } x1; NSUInteger x2; })arg2;
- (NSUInteger)textureForTileAtIndex:(NSUInteger)arg1;
- (void)unbindTexture;

@end