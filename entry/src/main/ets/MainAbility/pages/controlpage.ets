import prompt from '@system.prompt'
import aircasHD from "libaircashd.so"
@Entry
@Component
export struct control {
  build() {
    Flex({ direction: FlexDirection.Column, alignItems: ItemAlign.Center, justifyContent: FlexAlign.Center }) {
      Button("move_forward").margin(10).fontSize(24).onClick(() => {
        let resultFromNAPI = aircasHD.send_moveforward()
        prompt.showToast({ message: resultFromNAPI })
      })
      Button("move_backward").margin(10).fontSize(24).onClick(() => {
        let resultFromNAPI = aircasHD.send_movebackward()
        prompt.showToast({ message: resultFromNAPI })
      })
      Button("turnleft").margin(10).fontSize(24).onClick(() => {
        let resultFromNAPI = aircasHD.send_turnleft()
        prompt.showToast({ message: resultFromNAPI })
      })
      Button("turnright").margin(10).fontSize(24).onClick(() => {
        // 调用napi接口
        let resultFromNAPI = aircasHD.send_turnright()
        prompt.showToast({ message: resultFromNAPI })
      })
      Button("stop").margin(10).fontSize(24).onClick(() => {
        // 调用napi接口
        let resultFromNAPI = aircasHD.send_stop()
        prompt.showToast({ message: resultFromNAPI })
      })
    }
    .width('100%')
    .height('100%')
  }
}