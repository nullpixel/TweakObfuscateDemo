//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class EAGLContext, NSMutableSet;

@interface EAGLView : UIView
{
    int backingWidth;
    int backingHeight;
    unsigned int defaultFramebuffer;
    unsigned int colorRenderbuffer;
    unsigned int depthRenderbuffer;
    unsigned int elementArrayBuffer;
    EAGLContext *_renderContext;
    NSMutableSet *_currentTouches;
    NSMutableSet *_releaseTouches;
}

+ (Class)layerClass;
@property(retain, nonatomic) NSMutableSet *releaseTouches; // @synthesize releaseTouches=_releaseTouches;
@property(retain, nonatomic) NSMutableSet *currentTouches; // @synthesize currentTouches=_currentTouches;
@property(retain, nonatomic) EAGLContext *renderContext; // @synthesize renderContext=_renderContext;
- (void).cxx_destruct;
- (void)dealloc;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)resetTouches;
- (id)touches;
- (void)layoutSubviews;
- (void)set2dSpace:(struct CGSize)arg1;
- (void)destroyFramebuffer;
- (_Bool)createFramebuffer;
- (void)swapBuffer;
- (void)prepareToRender;
- (void)performBlockInBackground:(CDUnknownBlockType)arg1;
- (void)startRenderContext;
- (id)initWithFrame:(struct CGRect)arg1;

@end
