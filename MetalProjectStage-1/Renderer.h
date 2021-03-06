//
//  Renderer.h
//  MetalProjectStage-1
//
//  Created by Xcode Developer on 6/2/21.
//

#import <MetalKit/MetalKit.h>
#import <MetalPerformanceShaders/MetalPerformanceShaders.h>
#import <AVFoundation/AVFoundation.h>

// Our platform independent renderer class.   Implements the MTKViewDelegate protocol which
//   allows it to accept per-frame update and drawable resize callbacks.
@interface Renderer : NSObject <AVCaptureVideoDataOutputSampleBufferDelegate>

- (nonnull instancetype)initWithMetalKitView:(nonnull MTKView *)view;

@end

